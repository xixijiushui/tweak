//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKRotatedTableViewCell.h"

#import "SokuStarPersonViewDelegate.h"

@class NSString, SokuStarPersonView, ViewTypeBStarItemModel;

@interface ViewTypeBStarNewRotatedCell : SKRotatedTableViewCell <SokuStarPersonViewDelegate>
{
    SokuStarPersonView *_startView;
    ViewTypeBStarItemModel *_personModel;
}

+ (float)getCellHeight:(id)arg1;
+ (float)getCellWidth;
@property(retain, nonatomic) ViewTypeBStarItemModel *personModel; // @synthesize personModel=_personModel;
@property(retain, nonatomic) SokuStarPersonView *startView; // @synthesize startView=_startView;
- (void).cxx_destruct;
- (id)getCellExposureDicWithIsFirstLast:(_Bool)arg1 andTablview:(id)arg2;
- (void)clickedCell:(int)arg1;
- (void)setData:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
