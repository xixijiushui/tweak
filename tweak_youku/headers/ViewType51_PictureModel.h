//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ViewTypeBaseModel.h"

@class NSString;

@interface ViewType51_PictureModel : ViewTypeBaseModel
{
    NSString *_cover;
    long long _episode;
    NSString *_name;
    NSString *_vid;
    NSString *_note;
    NSString *_showid;
    NSString *_tabId;
    NSString *_setId;
}

@property(retain, nonatomic) NSString *setId; // @synthesize setId=_setId;
@property(retain, nonatomic) NSString *tabId; // @synthesize tabId=_tabId;
@property(retain, nonatomic) NSString *showid; // @synthesize showid=_showid;
@property(retain, nonatomic) NSString *note; // @synthesize note=_note;
@property(retain, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long episode; // @synthesize episode=_episode;
@property(retain, nonatomic) NSString *cover; // @synthesize cover=_cover;
- (void).cxx_destruct;
- (void)parseStatisticsParam;
- (id)initWithDic:(id)arg1;

@end

