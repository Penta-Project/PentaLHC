# PentaLHC

PentaLHC

# READ ME!!! 

Please make sure you are running the latest version of PentaLHC Version v1.6 L.H.C


# General Build Information


Ubuntu Dependencies:
===================

sudo apt-get install build-essential libtool autotools-dev automake pkg-config libssl-dev libevent-dev bsdmainutils

sudo apt-get install qt5-default qt5-qmake qtbase5-dev-tools qttools5-dev-tools build-essential libboost-dev libboost-system-dev libboost-filesystem-dev libboost-program-options-dev libboost-thread-dev libssl-dev libdb++-dev libminiupnpc-dev

sudo apt-get install software-properties-common

sudo add-apt-repository ppa:bitcoin/bitcoin

sudo apt-get update

sudo apt-get install libdb4.8-dev libdb4.8++-dev

sudo apt-get install libqrencode-dev

Ubuntu Building:
================

git clone https://github.com/Penta-Project/PentaLHC.git

cd PentaLHC/src/leveldb

sh build_detect_platform build_config.mk .

cd ..

sudo make -f makefile.unix

strip Pentaquarkd

LD_LIBRARY_PATH=/usr/local/lib

export LD_LIBRARY_PATH


# General Information

Name: Pentaquark
Ticker: LHC
Type: POW/POS
Max Block size: 10MB
Drift Time: 5 minutes
Maximum amount: 5,000,000
Max Outbound connections: 32 Net Connections


# Proof Of Work Information

Block Time: 3 minutes
Coinbase Maturity: 15 Blocks
Target Timespan: 6 minutes
Modifier Interval: 6 minutes


# Proof Of Work Mining Structure

Block 0 - 1,000: 0.1 LHC per block
Block 1,001 - 2,000: 1000 LHC per block
Block 2,001 - 10,000: 100 LHC per block
Block 10,001 - : 0.1 LHC per block


# Proof Of Stake Information

Proof of stake starts at block: 100
Block Time: 3 minutes
Minimum Staking age: 1 hour
Maximum Staking age: 21 days
Coinbase Maturity: 15 Blocks
Staking Split Age: 1 day
Combined Staking threshold: 1,000 LHC


# Proof Of Stake Mining Structure

Block 100 - 1000: 0 per block
Block 1001 - 10,000: 1000% yearly interest
Block 10,001 - 100,000: 2 per block
Block 100,001 - 1,000,000: 1 per block
After that 1000%


# Port Information

rpcport = 16701
port = 16702


# Transaction Information

Transaction confirmations: 2 blocks or 6 minutes max
Transaction Fee: 0.00000010 LHC


# Wallet & Code Links

Github: https://github.com/Penta-Project/PentaLHC

Windows Wallet: https://github.com/Penta-Project/Wallets/blob/master/Windows

Windows Daemon: https://github.com/Penta-Project/Wallets/blob/master/Windows

Linux Wallet: https://github.com/Penta-Project/Wallets/blob/master/Linux

Linux Daemon: https://github.com/Penta-Project/Wallets/blob/master/Linux


# Exchanges

YOBIT https://yobit.net/en/trade/LHC/BTC


# Block Explorer


# External Links

Bitcointalk: https://bitcointalk.org/index.php?topic=1154533.0

Website: 

Discord: 

Telegram:

Twitter:  
