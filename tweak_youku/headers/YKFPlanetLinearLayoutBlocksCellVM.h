//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFLineLayoutBlocksCellVM.h"

@class NSString;

@interface YKFPlanetLinearLayoutBlocksCellVM : YKFLineLayoutBlocksCellVM
{
    long long _blockCellType;
    id _dataSourcePO;
    id <YKFBlocksCellPluginProtocol> _plugin;
    long long _postId;
    NSString *_reqId;
}

@property(copy, nonatomic) NSString *reqId; // @synthesize reqId=_reqId;
@property(nonatomic) long long postId; // @synthesize postId=_postId;
@property(nonatomic) __weak id <YKFBlocksCellPluginProtocol> plugin; // @synthesize plugin=_plugin;
@property(retain, nonatomic) id dataSourcePO; // @synthesize dataSourcePO=_dataSourcePO;
@property(nonatomic) long long blockCellType; // @synthesize blockCellType=_blockCellType;
- (void).cxx_destruct;
- (void)handleCheckMoreButtonClickEvent;
- (void)handleTrackDataWhenSelectedEvent;
- (void)handleDisplayCellEvent;

@end
