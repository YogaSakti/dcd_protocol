#!/bin/bash
DATADIR="/node/blockchain"
LOGDIR="/node/log"
ACCOUNT="accounttest1"

if [ ! -d $DATADIR ]; then
  mkdir -p $DATADIR;
fi
if [ ! -d $LOGDIR ]; then
  mkdir -p $LOGDIR;
fi

/usr/local/dcd_protocol/bin/dcdnode \
--genesis-json $DATADIR"/../config/genesis.json" \
--signature-provider DCD5sK22SGYSWP3aaRr5GG1JxJodWbAtfsMV1zwMCJFKmpX5rJUoP=KEY:5J3Wxum2yXa6HXAZccNjbgVGaQ5iotUkZp2MiMw5ZiffbWDZaSs \
--plugin dcd::producer_plugin \
--plugin dcd::producer_api_plugin \
--plugin dcd::chain_plugin \
--plugin dcd::chain_api_plugin \
--plugin dcd::http_plugin \
--plugin dcd::history_api_plugin \
--plugin dcd::history_plugin \
--data-dir $DATADIR"/data" \
--blocks-dir $DATADIR"/blocks" \
--config-dir $DATADIR"/config" \
--producer-name $ACCOUNT \
--http-server-address 0.0.0.0:8022 \
--p2p-listen-endpoint 0.0.0.0:9022 \
--access-control-allow-origin=* \
--contracts-console \
--http-validate-host=false \
--verbose-http-errors \
--enable-stale-production \
--p2p-peer-address 127.0.0.1:9010 \
--hard-replay-blockchain \
>> $LOGDIR"/dcdnode.log" 2>&1 & \
echo $! > $DATADIR"/dcdd.pid"

touch $DATADIR/inited.lock