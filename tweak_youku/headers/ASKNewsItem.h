//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AESegueModel, NSArray, NSString;

@interface ASKNewsItem : NSObject
{
    _Bool _haveVedio;
    int _news_type;
    NSString *_identifier;
    NSString *_title;
    NSArray *_imageUrlStrings;
    AESegueModel *_segueModel;
}

@property(nonatomic) int news_type; // @synthesize news_type=_news_type;
@property(nonatomic) _Bool haveVedio; // @synthesize haveVedio=_haveVedio;
@property(readonly, nonatomic) AESegueModel *segueModel; // @synthesize segueModel=_segueModel;
@property(retain, nonatomic) NSArray *imageUrlStrings; // @synthesize imageUrlStrings=_imageUrlStrings;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;

@end

