//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LSBulletBody, NSString;

@protocol LSDetailPhoneCommentCellDelegate <NSObject>
+ (double)heightByItem:(NSString *)arg1 width:(double)arg2;
@property(copy, nonatomic) CDUnknownBlockType buttonTappedBlock;
@property(retain, nonatomic) LSBulletBody *body;
@property(nonatomic) struct UIEdgeInsets contentInset;
@property(nonatomic) unsigned long long cellStyle;
- (void)setDataByItem:(id)arg1;
@end
