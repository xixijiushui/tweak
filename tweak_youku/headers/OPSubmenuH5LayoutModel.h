//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OPSubmenuLayoutModel.h"

@class DYKH5WebViewController, NSString, YoukuWeexViewController;

@interface OPSubmenuH5LayoutModel : OPSubmenuLayoutModel
{
    DYKH5WebViewController *_h5Controller;
    YoukuWeexViewController *_weexController;
    NSString *_defaultTitle;
}

@property(copy, nonatomic) NSString *defaultTitle; // @synthesize defaultTitle=_defaultTitle;
@property(retain, nonatomic) YoukuWeexViewController *weexController; // @synthesize weexController=_weexController;
@property(retain, nonatomic) DYKH5WebViewController *h5Controller; // @synthesize h5Controller=_h5Controller;
- (void).cxx_destruct;
- (void)setupWeexViewWithWidth:(double)arg1 urlString:(id)arg2 h5Delegate:(id)arg3 sourceController:(id)arg4;
- (void)setupModuleViewWithWidth:(double)arg1 urlString:(id)arg2 h5Delegate:(id)arg3 sourceController:(id)arg4;
- (void)setupModuleViewWithURLString:(id)arg1 h5Delegate:(id)arg2 sourceController:(id)arg3;

@end

