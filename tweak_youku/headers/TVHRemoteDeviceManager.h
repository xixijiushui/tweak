//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSNetServiceBrowserDelegate.h"
#import "NSNetServiceDelegate.h"
#import "TVHRemoteConnectorDelegate.h"
#import "UpdateRemoteDetectDevDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSNetServiceBrowser, NSString, RemoteTcpServerDetector, TVHDeviceInfo, TVHRemoteConnector;

@interface TVHRemoteDeviceManager : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate, UpdateRemoteDetectDevDelegate, TVHRemoteConnectorDelegate>
{
    _Bool _isHaveGetActiveDetectedIP;
    _Bool _isBrowsingDevices;
    _Bool _isManulConnect;
    _Bool _isWifiActive;
    _Bool _isAllowWork;
    _Bool _isActiveLanType;
    _Bool _isNeedAutoBrowseDev;
    _Bool _isIdentifyDevByUUID;
    int _lastConnectedDevRcsPort;
    id <TVHEngineCoreDelegate> _devMgrDelegate;
    NSMutableArray *_devList;
    NSMutableDictionary *_mdnsDevDic;
    NSMutableArray *_unresolvedServices;
    NSNetServiceBrowser *_serviceBrowser;
    RemoteTcpServerDetector *_tcpDevDetector;
    NSString *_curConnectingDevIP;
    NSString *_lastConnectedDevIP;
    NSString *_lastConnectedDevID;
    TVHDeviceInfo *_curConnectedDev;
    unsigned long long _tryConnectLastDevCount;
    NSString *_curWifiID;
    NSMutableDictionary *_devConnectordic;
    TVHRemoteConnector *_lanConnector;
    TVHRemoteConnector *_wanConnector;
    TVHRemoteConnector *_activeConnector;
    double _lastBrowseDevTime;
    NSString *_allowedDevOS;
    NSMutableArray *_engineCoreListenerArray;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *engineCoreListenerArray; // @synthesize engineCoreListenerArray=_engineCoreListenerArray;
@property(retain, nonatomic) NSString *allowedDevOS; // @synthesize allowedDevOS=_allowedDevOS;
@property(nonatomic) _Bool isIdentifyDevByUUID; // @synthesize isIdentifyDevByUUID=_isIdentifyDevByUUID;
@property(nonatomic) _Bool isNeedAutoBrowseDev; // @synthesize isNeedAutoBrowseDev=_isNeedAutoBrowseDev;
@property(nonatomic) double lastBrowseDevTime; // @synthesize lastBrowseDevTime=_lastBrowseDevTime;
@property(nonatomic) _Bool isActiveLanType; // @synthesize isActiveLanType=_isActiveLanType;
@property(retain, nonatomic) TVHRemoteConnector *activeConnector; // @synthesize activeConnector=_activeConnector;
@property(retain, nonatomic) TVHRemoteConnector *wanConnector; // @synthesize wanConnector=_wanConnector;
@property(retain, nonatomic) TVHRemoteConnector *lanConnector; // @synthesize lanConnector=_lanConnector;
@property(nonatomic) _Bool isAllowWork; // @synthesize isAllowWork=_isAllowWork;
@property(retain, nonatomic) NSMutableDictionary *devConnectordic; // @synthesize devConnectordic=_devConnectordic;
@property(nonatomic) _Bool isWifiActive; // @synthesize isWifiActive=_isWifiActive;
@property(retain, nonatomic) NSString *curWifiID; // @synthesize curWifiID=_curWifiID;
@property(nonatomic) unsigned long long tryConnectLastDevCount; // @synthesize tryConnectLastDevCount=_tryConnectLastDevCount;
@property(nonatomic) _Bool isManulConnect; // @synthesize isManulConnect=_isManulConnect;
@property(nonatomic) _Bool isBrowsingDevices; // @synthesize isBrowsingDevices=_isBrowsingDevices;
@property(retain, nonatomic) TVHDeviceInfo *curConnectedDev; // @synthesize curConnectedDev=_curConnectedDev;
@property(nonatomic) int lastConnectedDevRcsPort; // @synthesize lastConnectedDevRcsPort=_lastConnectedDevRcsPort;
@property(retain, nonatomic) NSString *lastConnectedDevID; // @synthesize lastConnectedDevID=_lastConnectedDevID;
@property(retain, nonatomic) NSString *lastConnectedDevIP; // @synthesize lastConnectedDevIP=_lastConnectedDevIP;
@property(retain, nonatomic) NSString *curConnectingDevIP; // @synthesize curConnectingDevIP=_curConnectingDevIP;
@property(nonatomic) _Bool isHaveGetActiveDetectedIP; // @synthesize isHaveGetActiveDetectedIP=_isHaveGetActiveDetectedIP;
@property(retain, nonatomic) RemoteTcpServerDetector *tcpDevDetector; // @synthesize tcpDevDetector=_tcpDevDetector;
@property(retain, nonatomic) NSNetServiceBrowser *serviceBrowser; // @synthesize serviceBrowser=_serviceBrowser;
@property(retain, nonatomic) NSMutableArray *unresolvedServices; // @synthesize unresolvedServices=_unresolvedServices;
@property(retain, nonatomic) NSMutableDictionary *mdnsDevDic; // @synthesize mdnsDevDic=_mdnsDevDic;
@property(retain, nonatomic) NSMutableArray *devList; // @synthesize devList=_devList;
@property(nonatomic) __weak id <TVHEngineCoreDelegate> devMgrDelegate; // @synthesize devMgrDelegate=_devMgrDelegate;
- (void).cxx_destruct;
- (_Bool)isActiveConnectorLanType;
- (void)configActiveConnectorType:(int)arg1;
- (void)disconnectWanDev;
- (void)connectWanDev:(id)arg1;
- (void)configWanConnector:(id)arg1;
- (id)getActiveConnector;
- (void)handleConnectedDevInfoUpdateMessage:(id)arg1;
- (_Bool)storeConnectedInfo:(id)arg1 deviceIP:(id)arg2 rcsPort:(int)arg3;
- (id)getConnectedDevName;
- (id)getConnectedDeviceID;
- (id)getConnectedDevIP;
- (id)getConnectedDevInfo;
- (void)configAllowedDevOS:(id)arg1;
- (void)identifyDevByUUID:(_Bool)arg1;
- (void)enableAutoBrowseDev:(_Bool)arg1;
- (_Bool)isConnected:(int)arg1;
- (_Bool)isConnected;
- (void)resetConnectState:(int)arg1 needPostMessage:(_Bool)arg2;
- (void)resetConnectState:(int)arg1;
- (void)handleAppStateMessage:(id)arg1;
- (void)handleConnectTimeout;
- (void)handleConnectHeartBeatTimeout;
- (void)retryConnectLastDev;
- (void)handleRemoteControlConnectMessage:(id)arg1;
- (void)onRemoteConnectorNotification:(id)arg1 notificationName:(id)arg2 userInfo:(id)arg3;
- (void)notifyEngineCoreMessage:(id)arg1 userInfo:(id)arg2;
- (void)onFinishDetect:(_Bool)arg1;
- (void)addRemoteDetectDev:(id)arg1 deviceID:(id)arg2;
- (id)addFindedDevWithIP:(id)arg1 name:(id)arg2 deviceID:(id)arg3 deviceModel:(id)arg4;
- (void)addFindedDev:(id)arg1;
- (void)checkForLastConnectedDev;
- (void)innerDisconnectDev:(int)arg1;
- (void)tryConnectLastDev;
- (void)disconnectDev;
- (void)innerConnectDev:(id)arg1 withPort:(int)arg2 manul:(_Bool)arg3;
- (void)connectDev:(id)arg1 withPort:(int)arg2;
- (void)connectDev:(id)arg1;
- (_Bool)checkAndConnect:(id)arg1 withPort:(int)arg2;
- (long long)getDevIndexWithIP:(id)arg1;
- (id)getDevInfoWithID:(id)arg1;
- (id)getDevInfoWithIP:(id)arg1;
- (id)getDevInfo:(long long)arg1;
- (_Bool)removeDevWithIP:(id)arg1;
- (id)getDevices;
- (long long)getDevCount;
- (void)netServiceDidStop:(id)arg1;
- (void)netService:(id)arg1 didNotResolve:(id)arg2;
- (void)netServiceDidResolveAddress:(id)arg1;
- (void)netServiceWillResolve:(id)arg1;
- (void)updatesSearchState:(long long)arg1;
- (void)updateDevices:(long long)arg1 deviceIP:(id)arg2;
- (void)handleError:(id)arg1;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(_Bool)arg3;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(_Bool)arg3;
- (void)netServiceBrowser:(id)arg1 didNotSearch:(id)arg2;
- (void)netServiceBrowserDidStopSearch:(id)arg1;
- (void)netServiceBrowserWillSearch:(id)arg1;
- (void)updateWifiStatus:(_Bool)arg1 ssid:(id)arg2;
- (id)fetchConnectingDevIP;
- (_Bool)isConnectingDevice;
- (double)fetchLastBrowseDevTime;
- (_Bool)isBrowsingDev;
- (void)stopBrowseDev;
- (void)startSearchDevicesByBonjour;
- (void)handleNotifyStopBrowseMessage;
- (void)startDetectedLastConnectedDevIp;
- (void)startTcpDevDetect;
- (void)removeAllFindedDevs:(_Bool)arg1;
- (void)startBrowseDev;
- (void)startBrowseDev:(_Bool)arg1;
- (_Bool)unregisterEngineCoreListener:(id)arg1;
- (_Bool)registerEngineCoreListener:(id)arg1;
- (void)enableWork:(_Bool)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

