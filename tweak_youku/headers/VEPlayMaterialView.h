//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKUPlayView.h"

@class VELineView, VEMaterial;

@interface VEPlayMaterialView : YKUPlayView
{
    VEMaterial *_material;
    VELineView *_lineView;
}

@property(readonly, nonatomic) VELineView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) VEMaterial *material; // @synthesize material=_material;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)loadLineWithMaterial:(id)arg1;
- (void)setupLineView;
- (void)setup;
- (id)initWithMaterial:(id)arg1;
- (void)dealloc;

@end

