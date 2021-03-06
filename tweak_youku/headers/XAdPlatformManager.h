//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XAdPlatformExternProtocol.h"
#import "XAdPlatformInternalProtocol.h"

@class NSMutableArray, XAdPlatformBase;

@interface XAdPlatformManager : NSObject <XAdPlatformInternalProtocol, XAdPlatformExternProtocol>
{
    _Bool _isVipUser;
    XAdPlatformBase *_platform;
    NSMutableArray *_moduleContainers;
    id <YTEngineModuleController><YTEngineAdController> _currentModuleController;
}

+ (id)sharedInstance;
@property(nonatomic) __weak id <YTEngineModuleController><YTEngineAdController> currentModuleController; // @synthesize currentModuleController=_currentModuleController;
@property(nonatomic) _Bool isVipUser; // @synthesize isVipUser=_isVipUser;
@property(retain, nonatomic) NSMutableArray *moduleContainers; // @synthesize moduleContainers=_moduleContainers;
@property(retain, nonatomic) XAdPlatformBase *platform; // @synthesize platform=_platform;
- (void).cxx_destruct;
- (void)updateUserStatus;
- (void)removeModule:(id)arg1;
- (void)addModule:(id)arg1;
- (void)removeAppObserver;
- (void)addAppObserver;
- (_Bool)isVip;
- (id)cookie;
- (unsigned long long)platformAppType;
- (void)unbindModuleController:(id)arg1;
- (void)bindModuleController:(id)arg1;
- (void)registePlatformClass:(Class)arg1;
- (id)init;

@end

