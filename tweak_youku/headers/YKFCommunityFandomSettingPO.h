//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSString;

@interface YKFCommunityFandomSettingPO : YKFAPIModel
{
    long long _fandomId;
    NSString *_headPicUrl;
    NSString *_instructionUrl;
    NSString *_slogan;
}

@property(retain, nonatomic) NSString *slogan; // @synthesize slogan=_slogan;
@property(retain, nonatomic) NSString *instructionUrl; // @synthesize instructionUrl=_instructionUrl;
@property(retain, nonatomic) NSString *headPicUrl; // @synthesize headPicUrl=_headPicUrl;
@property(nonatomic) long long fandomId; // @synthesize fandomId=_fandomId;
- (void).cxx_destruct;

@end

