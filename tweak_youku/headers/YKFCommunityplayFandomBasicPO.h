//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSString;

@interface YKFCommunityplayFandomBasicPO : YKFAPIModel
{
    long long _contentCount;
    NSString *_coverPicUrl;
    long long _fansCount;
    NSString *_headPicUrl;
    long long _obj_id;
    NSString *_infoUrl;
    NSString *_name;
    long long _type;
}

@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *infoUrl; // @synthesize infoUrl=_infoUrl;
@property(nonatomic) long long obj_id; // @synthesize obj_id=_obj_id;
@property(retain, nonatomic) NSString *headPicUrl; // @synthesize headPicUrl=_headPicUrl;
@property(nonatomic) long long fansCount; // @synthesize fansCount=_fansCount;
@property(retain, nonatomic) NSString *coverPicUrl; // @synthesize coverPicUrl=_coverPicUrl;
@property(nonatomic) long long contentCount; // @synthesize contentCount=_contentCount;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;

@end
