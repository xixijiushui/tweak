//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSString;

@interface YKFStagephotoBlesslandingPO : YKFAPIModel
{
    NSString *_buttonText;
    NSString *_buttonUrl;
    long long _coverHeight;
    NSString *_coverImageUrl;
    long long _coverWidth;
    NSString *_pageTitle;
}

@property(retain, nonatomic) NSString *pageTitle; // @synthesize pageTitle=_pageTitle;
@property(nonatomic) long long coverWidth; // @synthesize coverWidth=_coverWidth;
@property(retain, nonatomic) NSString *coverImageUrl; // @synthesize coverImageUrl=_coverImageUrl;
@property(nonatomic) long long coverHeight; // @synthesize coverHeight=_coverHeight;
@property(retain, nonatomic) NSString *buttonUrl; // @synthesize buttonUrl=_buttonUrl;
@property(retain, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
- (void).cxx_destruct;

@end
