//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSArray<YKFCommunityFandomCellPO>, NSString;

@interface YKFCommunityTopicItemPO : YKFAPIModel
{
    long long _discussCount;
    NSArray<YKFCommunityFandomCellPO> *_fandoms;
    long long _obj_id;
    NSString *_imageUrl;
    NSString *_label;
    NSString *_schemaUrl;
    NSString *_subTitle;
    NSString *_title;
}

@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSString *schemaUrl; // @synthesize schemaUrl=_schemaUrl;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(nonatomic) long long obj_id; // @synthesize obj_id=_obj_id;
@property(retain, nonatomic) NSArray<YKFCommunityFandomCellPO> *fandoms; // @synthesize fandoms=_fandoms;
@property(nonatomic) long long discussCount; // @synthesize discussCount=_discussCount;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;

@end

