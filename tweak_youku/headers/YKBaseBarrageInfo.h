//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDictionary, NSNumber, NSString, UIColor, YKBarrageUserActionModel;

@interface YKBaseBarrageInfo : NSObject <NSCopying>
{
    _Bool _forcedToShow;
    _Bool _isShown;
    _Bool _isLiked;
    _Bool _isDisagreed;
    _Bool _showVoteUp;
    NSNumber *_dmID;
    unsigned long long _barrageType;
    NSString *_contents;
    NSString *_scm;
    long long _positionType;
    NSDictionary *_properties;
    long long _textColorValue;
    long long _textColorValue2;
    UIColor *_bubbleColor;
    double _alpha;
    double _fontSize;
    NSString *_uid;
    NSNumber *_ytid;
    NSString *_nickname;
    NSString *_avatarUrl;
    YKBarrageUserActionModel *_actionModel;
    long long _voteUp;
    long long _voteDown;
}

@property(nonatomic) _Bool showVoteUp; // @synthesize showVoteUp=_showVoteUp;
@property(nonatomic) long long voteDown; // @synthesize voteDown=_voteDown;
@property(nonatomic) long long voteUp; // @synthesize voteUp=_voteUp;
@property(nonatomic) _Bool isDisagreed; // @synthesize isDisagreed=_isDisagreed;
@property(nonatomic) _Bool isLiked; // @synthesize isLiked=_isLiked;
@property(nonatomic) _Bool isShown; // @synthesize isShown=_isShown;
@property(retain, nonatomic) YKBarrageUserActionModel *actionModel; // @synthesize actionModel=_actionModel;
@property(nonatomic) _Bool forcedToShow; // @synthesize forcedToShow=_forcedToShow;
@property(copy, nonatomic) NSString *avatarUrl; // @synthesize avatarUrl=_avatarUrl;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(copy, nonatomic) NSNumber *ytid; // @synthesize ytid=_ytid;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(retain, nonatomic) UIColor *bubbleColor; // @synthesize bubbleColor=_bubbleColor;
@property(nonatomic) long long textColorValue2; // @synthesize textColorValue2=_textColorValue2;
@property(nonatomic) long long textColorValue; // @synthesize textColorValue=_textColorValue;
@property(copy, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;
@property(nonatomic) long long positionType; // @synthesize positionType=_positionType;
@property(copy, nonatomic) NSString *scm; // @synthesize scm=_scm;
@property(copy, nonatomic) NSString *contents; // @synthesize contents=_contents;
@property(nonatomic) unsigned long long barrageType; // @synthesize barrageType=_barrageType;
@property(copy, nonatomic) NSNumber *dmID; // @synthesize dmID=_dmID;
- (void).cxx_destruct;
- (id)beautifiedContents;
- (id)toJsonDict;
- (_Bool)isClickable;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)parsePositionTypeWithStr:(id)arg1;
- (void)mergeFromJSON:(id)arg1;
- (id)init;

@end

