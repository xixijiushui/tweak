//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class NSString, UIImageView, UIScrollView;

@interface AliMusicSliderView : UIView <UIScrollViewDelegate>
{
    double _currentLength;
    double _maxLength;
    CDUnknownBlockType _AliMusicSliderBeginEditBlock;
    double _time;
    UIScrollView *_scrollView;
    UIImageView *_totalView;
    UIImageView *_progressView;
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
@property(retain, nonatomic) UIImageView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIImageView *totalView; // @synthesize totalView=_totalView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) double time; // @synthesize time=_time;
@property(copy, nonatomic) CDUnknownBlockType AliMusicSliderBeginEditBlock; // @synthesize AliMusicSliderBeginEditBlock=_AliMusicSliderBeginEditBlock;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)refreshRangeStart:(double)arg1;
- (void)notifyRangeChanged:(id)arg1;
- (void)commonInit;
@property(nonatomic) double currentLength; // @synthesize currentLength=_currentLength;
@property(nonatomic) double maxLength; // @synthesize maxLength=_maxLength;
- (void)setRangeStart:(double)arg1;
- (struct AliAudioRange)range;
- (void)layoutSubviews;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

