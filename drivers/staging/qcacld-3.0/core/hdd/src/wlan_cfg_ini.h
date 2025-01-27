static const char wlan_cfg[] __initconst = {
	"gEnableImps=1\n"
	"gEnableBmps=1\n"
	"gDot11Mode=0\n"
	"Intf0MacAddress=000AF58989FF\n"
	"Intf1MacAddress=000AF58989FE\n"
	"Intf2MacAddress=000AF58989FD\n"
	"Intf3MacAddress=000AF58989FC\n"
	"InfraUapsdVoSrvIntv=0\n"
	"InfraUapsdViSrvIntv=0\n"
	"InfraUapsdBeSrvIntv=0\n"
	"InfraUapsdBkSrvIntv=0\n"
	"gAddTSWhenACMIsOff=1\n"
	"McastBcastFilter=3\n"
	"hostArpOffload=1\n"
	"hostNSOffload=1\n"
	"gEnableApProt=1\n"
	"gEnableApOBSSProt=1\n"
	"gEnableApUapsd=1\n"
	"gFixedRate=0\n"
	"RTSThreshold=1048576\n"
	"gDisableIntraBssFwd=0\n"
	"WmmIsEnabled=0\n"
	"g11dSupportEnabled=0\n"
	"g11hSupportEnabled=1\n"
	"gEnableDFSMasterCap=1\n"
	"EseEnabled=0\n"
	"ImplicitQosIsEnabled=0\n"
	"gNeighborScanTimerPeriod=200\n"
	"gNeighborLookupThreshold=85\n"
	"gNeighborScanChannelMinTime=20\n"
	"gNeighborScanChannelMaxTime=30\n"
	"gMaxNeighborReqTries=3\n"
	"FastRoamEnabled=1\n"
	"RoamRssiDiff=5\n"
	"gRoamIntraBand=0\n"
	"gShortGI20Mhz=1\n"
	"gShortGI40Mhz=1\n"
	"gAPAutoShutOff=0\n"
	"gWlanAutoShutdown = 0\n"
	"gApAutoChannelSelection=0\n"
	"BandCapability=0\n"
	"gChannelBondingMode5GHz=1\n"
	"gGoKeepAlivePeriod = 20\n"
	"gApKeepAlivePeriod = 20\n"
	"gEnableBypass11d=1\n"
	"gEnableDFSChnlScan=1\n"
	"gAllowDFSChannelRoam=1\n"
	"gVhtChannelWidth=2\n"
	"gDataInactivityTimeout=200\n"
	"gSetTxChainmask1x1=1\n"
	"gSetRxChainmask1x1=1\n"
	"gActiveMaxChannelTime=40\n"
	"gActiveMinChannelTime=20\n"
	"gEnableMCCMode=1\n"
	"gWlanMccToSccSwitchMode = 3\n"
	"gEnableRXSTBC=1\n"
	"gEnableTXSTBC=1\n"
	"gEnableRXLDPC=1\n"
	"gTxBFEnable=1\n"
	"gEnableTxBFeeSAP=1\n"
	"gEnableTxBFin20MHz=1\n"
	"gEnableTxSUBeamformer=1\n"
	"gEnableFastRoamInConcurrency=1\n"
	"gMaxMediumTime = 6000\n"
	"gRrmEnable=1\n"
	"gEnablePowerSaveOffload=4\n"
	"gEnablefwprint=0\n"
	"gEnablefwlog=0\n"
	"gVhtAmpduLenExponent=7\n"
	"gVhtMpduLen=2\n"
	"gEnableMCCAdaptiveScheduler=1\n"
	"isP2pDeviceAddrAdministrated=0\n"
	"gEnableOverLapCh=0\n"
	"gEnableVhtFor24GHzBand=1\n"
	"ssdp=0\n"
	"gEnableMemDeepSleep=1\n"
	"gRegulatoryChangeCountry=1\n"
	"gRArateLimitInterval=600\n"
	"gMaxConcurrentActiveSessions=3\n"
	"gEnableGreenAp=0\n"
	"gDFSradarMappingPriMultiplier=4\n"
	"gPNOScanSupport=1\n"
	"gEnableLpassSupport=1\n"
	"gCountryCodePriority=1\n"
	"gEnableSifsBurst=1\n"
	"gEnableMuBformee=1\n"
	"gSapSccChanAvoidance=0\n"
	"gIbssTxSpEndInactivityTime=10\n"
	"gTDLSExternalControl=1\n"
	"gEnableTDLSOffChannel=1\n"
	"gEnableMacAddrSpoof=1\n"
	"gBusBandwidthHighThreshold=2000\n"
	"gBusBandwidthMediumThreshold=500\n"
	"gBusBandwidthLowThreshold=150\n"
	"gBusBandwidthComputeInterval=100\n"
	"gVhtRxMCS=2\n"
	"gVhtTxMCS=2\n"
	"gEnable2x2=1\n"
	"gVhtRxMCS2x2=2\n"
	"gVhtTxMCS2x2=2\n"
	"gIPAConfig=0x7d\n"
	"gIPADescSize=800\n"
	"gIPAForceVotingEnable=1\n"
	"spectral_disable=1\n"
	"gIPALowBandwidthMbps=100\n"
	"gIPAMediumBandwidthMbps=400\n"
	"gIPAHighBandwidthMbps=800\n"
	"gReorderOffloadSupported=1\n"
	"gCEClassifyEnable=1\n"
	"rx_mode=5\n"
	"gEnableFastPath=1\n"
	"gEnableIpTcpUdpChecksumOffload=1\n"
	"TSOEnable=1\n"
	"GROEnable=1\n"
	"ght_mpdu_density=4\n"
	"gEnableFlowSteering=1\n"
	"ce_service_max_yield_time=500\n"
	"ce_service_max_rx_ind_flush=1\n"
	"maxMSDUsPerRxInd=8\n"
	"gEnableNUDTracking=1\n"
	"gEnablePeerUnmapConfSupport=1\n"
	"gEnableNanSupport=1\n"
	"genable_nan_datapath=1\n"
	"adaptive_dwell_mode_enabled=1\n"
	"hostscan_adaptive_dwell_mode=1\n"
	"adapt_dwell_lpf_weight=80\n"
	"adapt_dwell_wifi_act_threshold=10\n"
	"gEnablePacketLog=0\n"
	"gForce1x1Exception=1\n"
	"MAWCEnabled=0\n"
	"enable_rtt_mac_randomization=1\n"
	"gEnableConcurrentSTA=wlan1\n"
	"gEnableSNRMonitoring=1\n"
	"gOptimizedPowerManagement=1\n"
	"END\n"
};
