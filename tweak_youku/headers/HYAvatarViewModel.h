//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@interface HYAvatarViewModel : NSObject
{
    _Bool _isSelected;
    NSURL *_iconUrl;
    NSString *_token;
}

+ (id)createViewModelWithAvatarData:(id)arg1;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) NSURL *iconUrl; // @synthesize iconUrl=_iconUrl;
- (void).cxx_destruct;

@end

