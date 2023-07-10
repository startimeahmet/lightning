# A modified implementation of Core Lightning (c-lightning) that implements 2-party threshold ECDSA for the first time.

The implementation was done by [Omer Shlomovits][omer] and [me][ahmet] as part of my Ph.D. research.

`hsmd` and `bitcoin` modules were modified to incorporate the threshold code into the Core Lightning software.

To perform the 2-party threshold operations, [gotham-city][gotham] from ZenGo was used. However, we slightly modified it to our needs.

## Steps

**The implementation was tested on a fresh Ubuntu 16.04.7 installation.**

## Bitcoin Core

Install Bitcoin Core first which is now available via snapd:
```bash
sudo apt install snapd
sudo snap install bitcoin-core --channel=24.x/stable
sudo ln -s /snap/bitcoin-core/current/bin/bitcoin{d,-cli} /usr/local/bin/
```

Create a config file for Bitcoin Core:
```bash
mkdir ~/.bitcoin
touch ~/.bitcoin/bitcoin.conf
```

paste the following into `bitcoin.conf`:
```bash
server=1
testnet=1
daemon=1
```

run Bitcoin Core:
```bash
bitcoind &
```

check regularly to see if Bitcoin is synched with Bitcoin [Testnet block height][testnet]:
```bash
bitcoin-cli getblockcount
```

Now we are done with configuring Bitcoin. Moving onto Core Lightning part.

## Core Lightning

Get dependencies:
```bash
sudo apt update
sudo apt install -y \
  autoconf automake build-essential git libtool libgmp-dev \
  libsqlite3-dev python3 python3-mako net-tools zlib1g-dev libsodium-dev \
  gettext
```

Clone this repository:
```bash
git clone https://github.com/startimeahmet/lightning.git
```

Build c-lightning:

```bash
cd ~/lightning
./configure
make
sudo make install
```

Running c-lightning:

```bash
lightningd &
lightning-cli help
```

## Gotham Client

Gotham Client is run on the desktop machine alongside the Lightning node.

Get dependencies:
```bash
sudo apt install libssl-dev clang libgmp3-dev curl
```

Install Rust Toolchain:
```bash
curl --proto '=https' --tlsv1.2 -sSf https://sh.rustup.rs | sh
rustup default nightly-2020-08-27
source "$HOME/.cargo/env"
```

Clone the repo and switch branch:
```bash
git clone https://github.com/startimeahmet/gotham-city
cd gotham-city
git checkout cyclic-dependency
```

Then compile Gotham Client:
```bash
cd ~/gotham-city/gotham-client
cargo build --release
```

## Gotham Server
Gotham Server is run on the Raspberry Pi.

After installing a fresh Raspbian on the Pi, first install the dependencies:
```bash
sudo apt install libssl-dev clang libgmp3-dev git
```

Install Rust Toolchain:
```bash
curl --proto '=https' --tlsv1.2 -sSf https://sh.rustup.rs | sh
rustup default nightly-2020-08-27
source "$HOME/.cargo/env"
```

Clone the repo and switch branch:
```bash
git clone https://github.com/startimeahmet/gotham-city
cd gotham-city
git checkout cyclic-dependency
```

Find the IP address of the Pi that Gotham Server will use:
```bash
ifconfig
```

After determining the IP (and the port), modify the `Rocket.toml` file inside Gotham Server:
```bash
nano ~/gotham-city/gotham-server/Rocket.toml
```

with the following:
```
[production]
address = "insert the IP address here"
port = "insert port here"
keep_alive = 5
log = "normal"
```

Then compile Gotham Server:
```bash
cd ~/gotham-city/gotham-server
cargo build --release
```

Finally, run the Gotham Server:
```bash
cargo run --release
```

[gotham]: https://github.com/ZenGo-X/gotham-city
[omer]: https://www.omershlomovits.com/
[ahmet]: https://www.linkedin.com/in/ahmet-kurt-fiu/
[gotham-ahmet]: https://github.com/startimeahmet/gotham-city/tree/cyclic-dependency
[testnet]: https://blockstream.info/testnet/