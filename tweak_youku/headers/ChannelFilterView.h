//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "ChannelFilterResultViewDelegate.h"
#import "ChildChannelScrollViewDelegate.h"

@class ChannelFilterResultView, NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface ChannelFilterView : UIView <ChildChannelScrollViewDelegate, ChannelFilterResultViewDelegate>
{
    _Bool _isShowFilterView;
    _Bool _hadShowResult;
    _Bool _selected;
    NSArray *_dataSource;
    id <ChannelFilterViewDelegate> _delegate;
    UIView *_superCardsView;
    ChannelFilterResultView *_filterResultView;
    NSMutableArray *_valueArray;
    NSMutableDictionary *_valueDictionary;
}

+ (float)cellHeight;
@property(retain, nonatomic) NSMutableDictionary *valueDictionary; // @synthesize valueDictionary=_valueDictionary;
@property(retain, nonatomic) NSMutableArray *valueArray; // @synthesize valueArray=_valueArray;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) ChannelFilterResultView *filterResultView; // @synthesize filterResultView=_filterResultView;
@property(nonatomic) __weak UIView *superCardsView; // @synthesize superCardsView=_superCardsView;
@property(nonatomic) __weak id <ChannelFilterViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)selectWithFilter:(id)arg1;
- (id)selectArray;
- (id)selectDic;
- (_Bool)superViewController:(id)arg1 results:(id)arg2 scrollToPoint:(struct CGPoint)arg3;
- (void)hideResultView;
- (void)hide;
- (void)showInView:(id)arg1;
- (void)reset;
- (void)didClickResults;
- (void)exposefilterStatistics;
- (void)resetfilterExposeStatistics;
- (void)shouldExposeWithArray:(id)arg1 target:(id)arg2;
- (void)didClickAtSection:(long long)arg1 index:(long long)arg2;
- (void)reloadData;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
