//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface DYTrackerShowForecastCardItem : NSObject
{
    _Bool _isSubScribe;
    NSString *_hint;
    NSString *_img;
    NSString *_scm;
    NSString *_showId;
    NSString *_subTitle;
    NSString *_thirdTitle;
    NSString *_title;
    NSString *_videoId;
    NSString *_intro;
    long long _indexTag;
}

+ (id)parseJson:(id)arg1;
@property(nonatomic) _Bool isSubScribe; // @synthesize isSubScribe=_isSubScribe;
@property(nonatomic) long long indexTag; // @synthesize indexTag=_indexTag;
@property(retain, nonatomic) NSString *intro; // @synthesize intro=_intro;
@property(retain, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *thirdTitle; // @synthesize thirdTitle=_thirdTitle;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSString *showId; // @synthesize showId=_showId;
@property(retain, nonatomic) NSString *scm; // @synthesize scm=_scm;
@property(retain, nonatomic) NSString *img; // @synthesize img=_img;
@property(retain, nonatomic) NSString *hint; // @synthesize hint=_hint;
- (void).cxx_destruct;
- (id)init;

@end
