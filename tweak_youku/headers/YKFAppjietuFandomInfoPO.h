//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSString;

@interface YKFAppjietuFandomInfoPO : YKFAPIModel
{
    long long _fandomId;
    NSString *_fandomName;
    long long _fandomType;
    long long _focusCount;
    NSString *_icon;
}

@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(nonatomic) long long focusCount; // @synthesize focusCount=_focusCount;
@property(nonatomic) long long fandomType; // @synthesize fandomType=_fandomType;
@property(retain, nonatomic) NSString *fandomName; // @synthesize fandomName=_fandomName;
@property(nonatomic) long long fandomId; // @synthesize fandomId=_fandomId;
- (void).cxx_destruct;

@end

