//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DetailCMSCardVideo.h"

@class NSString;

@interface DetailBroadcastSubscribeVideo : DetailCMSCardVideo
{
    _Bool _favorite;
    _Bool _archorItem;
    NSString *_seriesSubscribeShowId;
    NSString *_favourateWord;
    NSString *_unFavourateWord;
    NSString *_headTitle;
}

@property(nonatomic) _Bool archorItem; // @synthesize archorItem=_archorItem;
@property(copy, nonatomic) NSString *headTitle; // @synthesize headTitle=_headTitle;
@property(copy, nonatomic) NSString *unFavourateWord; // @synthesize unFavourateWord=_unFavourateWord;
@property(copy, nonatomic) NSString *favourateWord; // @synthesize favourateWord=_favourateWord;
@property(nonatomic) _Bool favorite; // @synthesize favorite=_favorite;
@property(copy, nonatomic) NSString *seriesSubscribeShowId; // @synthesize seriesSubscribeShowId=_seriesSubscribeShowId;
- (void).cxx_destruct;
- (_Bool)setupWithCMSInfo:(id)arg1;

@end

