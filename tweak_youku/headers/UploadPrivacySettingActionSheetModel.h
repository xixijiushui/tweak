//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSAttributedString, NSString;

@interface UploadPrivacySettingActionSheetModel : NSObject
{
    _Bool _selected;
    unsigned long long _tag;
    NSString *_title;
    NSAttributedString *_attributedTitle;
}

@property(retain, nonatomic) NSAttributedString *attributedTitle; // @synthesize attributedTitle=_attributedTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) unsigned long long tag; // @synthesize tag=_tag;
- (void).cxx_destruct;

@end

