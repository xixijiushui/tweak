//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIButton;

@interface RInstallDeviceItemCell : UITableViewCell
{
    UIButton *_deviceButton;
}

@property(retain, nonatomic) UIButton *deviceButton; // @synthesize deviceButton=_deviceButton;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)checkIsConnectedDevice:(id)arg1;
- (void)setDeviceInfo:(id)arg1;
- (void)initSubViews:(struct CGRect)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

