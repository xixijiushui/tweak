//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSString;

@interface YKFStararrivalVoteOptionPO : YKFAPIModel
{
    _Bool _check;
    long long _approvePersent;
    long long _approves;
    NSString *_content;
    long long _obj_id;
    NSString *_imageUrl;
}

@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(nonatomic) long long obj_id; // @synthesize obj_id=_obj_id;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) _Bool check; // @synthesize check=_check;
@property(nonatomic) long long approves; // @synthesize approves=_approves;
@property(nonatomic) long long approvePersent; // @synthesize approvePersent=_approvePersent;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;

@end
