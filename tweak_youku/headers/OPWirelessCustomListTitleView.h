//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class OPPlugin, UILabel;

@interface OPWirelessCustomListTitleView : UIView
{
    OPPlugin *_plugin;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak OPPlugin *plugin; // @synthesize plugin=_plugin;
- (void).cxx_destruct;
- (void)initSubViews:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

