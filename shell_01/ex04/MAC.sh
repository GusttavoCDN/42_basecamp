# Basically is the address of your machine like a CPF or RG.
# It serves to identify your device on the internet. The MAC identifies the physical device.
ifconfig | grep ether | awk '{ print $2 }'