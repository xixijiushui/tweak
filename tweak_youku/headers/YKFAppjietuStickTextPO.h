//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSArray<YKFAppjietuTextPO>, NSString, YKFAppjietuStickImagePO;

@interface YKFAppjietuStickTextPO : YKFAPIModel
{
    NSString *_desc;
    long long _height;
    long long _obj_id;
    YKFAppjietuStickImagePO *_stickImage;
    NSArray<YKFAppjietuTextPO> *_texts;
    NSString *_thumbs;
    long long _width;
}

@property(nonatomic) long long width; // @synthesize width=_width;
@property(retain, nonatomic) NSString *thumbs; // @synthesize thumbs=_thumbs;
@property(retain, nonatomic) NSArray<YKFAppjietuTextPO> *texts; // @synthesize texts=_texts;
@property(retain, nonatomic) YKFAppjietuStickImagePO *stickImage; // @synthesize stickImage=_stickImage;
@property(nonatomic) long long obj_id; // @synthesize obj_id=_obj_id;
@property(nonatomic) long long height; // @synthesize height=_height;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;

@end

