//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, OPPlugin, UIButton, UILabel, UIView;

@interface OPReportAlert : NSObject
{
    OPPlugin *_plugin;
    NSString *_reportPath;
    UIView *_alertView;
    UIView *_contentView;
    UILabel *_titleLabel;
    UIButton *_leftButton;
    UIButton *_rightButton;
}

@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UIButton *leftButton; // @synthesize leftButton=_leftButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *alertView; // @synthesize alertView=_alertView;
@property(copy, nonatomic) NSString *reportPath; // @synthesize reportPath=_reportPath;
@property(nonatomic) __weak OPPlugin *plugin; // @synthesize plugin=_plugin;
- (void).cxx_destruct;
- (void)toReport;
- (void)tapAction;
- (void)cancel;
- (void)update;
- (void)show;
- (id)containerView;

@end

