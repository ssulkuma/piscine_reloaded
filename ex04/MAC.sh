#!/bin/bash
ifconfig | grep -w 'ether' | cut -c 8-24