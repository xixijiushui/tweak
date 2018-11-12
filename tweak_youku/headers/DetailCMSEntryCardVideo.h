//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DetailBaseObject.h"

@class NSString, UIColor;

@interface DetailCMSEntryCardVideo : DetailBaseObject
{
    NSString *_label;
    UIColor *_labelColor;
    UIColor *_subtitleColor;
    NSString *_titleLabel;
    NSString *_itemId;
    NSString *_subtitleLabel;
}

@property(copy, nonatomic) NSString *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(copy, nonatomic) NSString *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) UIColor *subtitleColor; // @synthesize subtitleColor=_subtitleColor;
@property(copy, nonatomic) UIColor *labelColor; // @synthesize labelColor=_labelColor;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (void)setupWithCMSInfo:(id)arg1;

@end
