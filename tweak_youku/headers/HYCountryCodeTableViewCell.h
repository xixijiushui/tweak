//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class HYUserSDKCountryEntity, UILabel, UIView;

@interface HYCountryCodeTableViewCell : UITableViewCell
{
    UIView *_containerView;
    HYUserSDKCountryEntity *_entity;
    UILabel *_dialCodeLabel;
    UILabel *_countryNameLabel;
}

@property(nonatomic) __weak UILabel *countryNameLabel; // @synthesize countryNameLabel=_countryNameLabel;
@property(nonatomic) __weak UILabel *dialCodeLabel; // @synthesize dialCodeLabel=_dialCodeLabel;
@property(retain, nonatomic) HYUserSDKCountryEntity *entity; // @synthesize entity=_entity;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)updateWithEntity:(id)arg1;
- (void)awakeFromNib;

@end
