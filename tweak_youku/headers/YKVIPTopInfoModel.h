//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class VIPCMSPageItem, YKVIPHeaderbar, YKVIPLaunch, YKVIPUserinfo;

@interface YKVIPTopInfoModel : NSObject
{
    YKVIPUserinfo *_userInfo;
    YKVIPHeaderbar *_headerBar;
    YKVIPLaunch *_launch;
    VIPCMSPageItem *_pageItem;
}

+ (id)initModelWithDict:(id)arg1;
@property(nonatomic) __weak VIPCMSPageItem *pageItem; // @synthesize pageItem=_pageItem;
@property(retain, nonatomic) YKVIPLaunch *launch; // @synthesize launch=_launch;
@property(retain, nonatomic) YKVIPHeaderbar *headerBar; // @synthesize headerBar=_headerBar;
@property(retain, nonatomic) YKVIPUserinfo *userInfo; // @synthesize userInfo=_userInfo;
- (void).cxx_destruct;

@end
