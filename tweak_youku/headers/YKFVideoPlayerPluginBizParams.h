//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class YKFVideoItem;

@interface YKFVideoPlayerPluginBizParams : NSObject
{
    _Bool _userAction;
    CDUnknownBlockType _playerStateDidChanged;
    YKFVideoItem *_videoItem;
    struct CGSize _playerSize;
}

@property(nonatomic) _Bool userAction; // @synthesize userAction=_userAction;
@property(nonatomic) struct CGSize playerSize; // @synthesize playerSize=_playerSize;
@property(retain, nonatomic) YKFVideoItem *videoItem; // @synthesize videoItem=_videoItem;
@property(copy, nonatomic) CDUnknownBlockType playerStateDidChanged; // @synthesize playerStateDidChanged=_playerStateDidChanged;
- (void).cxx_destruct;

@end

