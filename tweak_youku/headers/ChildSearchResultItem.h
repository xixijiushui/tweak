//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ChildCardActionInfo, NSString, YoukuShowAllBaseRBO;

@interface ChildSearchResultItem : NSObject
{
    ChildCardActionInfo *_action;
    long long _id;
    NSString *_name;
    NSString *_pic;
    YoukuShowAllBaseRBO *_show;
    long long _type;
}

@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) YoukuShowAllBaseRBO *show; // @synthesize show=_show;
@property(retain, nonatomic) NSString *pic; // @synthesize pic=_pic;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long id; // @synthesize id=_id;
@property(retain, nonatomic) ChildCardActionInfo *action; // @synthesize action=_action;
- (void).cxx_destruct;
- (id)getShowName;
- (id)getSeriesId;
- (id)getShowId;

@end

