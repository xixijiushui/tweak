//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFeedModel.h"

@class NSMutableArray;

@interface YKFeedWatchPointTypeAModel : YKFeedModel
{
    _Bool _shouldShowFocus;
    _Bool _hasPlayedAtKandianCard;
    NSMutableArray *_tagsButtonsWidth;
    long long _canshowTags;
}

@property(nonatomic) _Bool hasPlayedAtKandianCard; // @synthesize hasPlayedAtKandianCard=_hasPlayedAtKandianCard;
@property(nonatomic) _Bool shouldShowFocus; // @synthesize shouldShowFocus=_shouldShowFocus;
@property(nonatomic) long long canshowTags; // @synthesize canshowTags=_canshowTags;
@property(retain, nonatomic) NSMutableArray *tagsButtonsWidth; // @synthesize tagsButtonsWidth=_tagsButtonsWidth;
- (void).cxx_destruct;
- (id)scm;
- (_Bool)setupWithCMSInfo:(id)arg1;
- (id)init;

@end

