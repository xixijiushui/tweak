//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSString;

@interface YKFAppjietuJieTuPostPO : YKFAPIModel
{
    NSString *_gifContent;
    NSString *_gifTitle;
    long long _obj_id;
    NSString *_jietuContent;
    NSString *_jietuTitle;
    NSString *_showId;
    NSString *_showName;
}

@property(retain, nonatomic) NSString *showName; // @synthesize showName=_showName;
@property(retain, nonatomic) NSString *showId; // @synthesize showId=_showId;
@property(retain, nonatomic) NSString *jietuTitle; // @synthesize jietuTitle=_jietuTitle;
@property(retain, nonatomic) NSString *jietuContent; // @synthesize jietuContent=_jietuContent;
@property(nonatomic) long long obj_id; // @synthesize obj_id=_obj_id;
@property(retain, nonatomic) NSString *gifTitle; // @synthesize gifTitle=_gifTitle;
@property(retain, nonatomic) NSString *gifContent; // @synthesize gifContent=_gifContent;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;

@end
