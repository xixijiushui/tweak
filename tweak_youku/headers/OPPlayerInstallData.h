//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface OPPlayerInstallData : NSObject
{
    _Bool _playingVideoIsCached;
    _Bool _disableAdv;
    _Bool _enableGeneralPlayer;
    _Bool _isCachedCardList;
    NSString *_modeIdentifier;
    NSString *_modeStr;
    long long _positionUpdateTimeInterval;
}

@property(nonatomic) long long positionUpdateTimeInterval; // @synthesize positionUpdateTimeInterval=_positionUpdateTimeInterval;
@property(nonatomic) _Bool isCachedCardList; // @synthesize isCachedCardList=_isCachedCardList;
@property(nonatomic) _Bool enableGeneralPlayer; // @synthesize enableGeneralPlayer=_enableGeneralPlayer;
@property(nonatomic) _Bool disableAdv; // @synthesize disableAdv=_disableAdv;
@property(nonatomic) _Bool playingVideoIsCached; // @synthesize playingVideoIsCached=_playingVideoIsCached;
@property(copy, nonatomic) NSString *modeStr; // @synthesize modeStr=_modeStr;
@property(copy, nonatomic) NSString *modeIdentifier; // @synthesize modeIdentifier=_modeIdentifier;
- (void).cxx_destruct;
- (id)init;

@end
