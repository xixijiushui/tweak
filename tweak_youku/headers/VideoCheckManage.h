//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface VideoCheckManage : NSObject
{
    _Bool _switch_repairvideo;
    NSMutableDictionary *_needrepairdic;
}

+ (id)shareInstance;
@property(nonatomic) _Bool switch_repairvideo; // @synthesize switch_repairvideo=_switch_repairvideo;
@property(retain, nonatomic) NSMutableDictionary *needrepairdic; // @synthesize needrepairdic=_needrepairdic;
- (void).cxx_destruct;
- (void)youkudownloadOrangechanged:(id)arg1;
- (void)registerOrangeforRepairvideo;
- (void)destroyvideofile:(id)arg1 sequence:(id)arg2;
- (void)dsmCommitRepairvideoWhenDownloadIfneed:(id)arg1 repairstate:(long long)arg2;
- (void)saverepairfile;
- (id)repairfilepath;
- (void)removerepairarray:(id)arg1;
- (void)addtorepairarray:(id)arg1;
- (void)dsmCommitRepairvideo:(id)arg1 repairreason:(long long)arg2 repairstate:(long long)arg3;
- (_Bool)existcheckfinishfile:(id)arg1;
- (void)touchcheckfinish:(id)arg1;
- (id)findAllCompleteVideos;
- (void)checkfinishvideo;
- (void)dealloc;
- (id)init;

@end

