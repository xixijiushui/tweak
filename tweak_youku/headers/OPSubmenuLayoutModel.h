//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OPLayoutModel.h"

@class UIView;

@interface OPSubmenuLayoutModel : OPLayoutModel
{
    UIView *_contentView;
    UIView *_iPhoneXAdaptView;
}

+ (id)createInstance;
@property(retain, nonatomic) UIView *iPhoneXAdaptView; // @synthesize iPhoneXAdaptView=_iPhoneXAdaptView;
- (void).cxx_destruct;
- (struct CGRect)iPhoneXSafeBounds;
- (void)setupModuleView2;
- (void)setupModuleView;

@end
