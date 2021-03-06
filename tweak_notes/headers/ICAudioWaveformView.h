//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "ICAudioCaptureSessionSampleObserver.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class NSArray, NSMutableArray, NSString, UICollectionView, UICollectionViewFlowLayout;

@interface ICAudioWaveformView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, ICAudioCaptureSessionSampleObserver>
{
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_collectionViewLayout;
    UIView *_positionMarker;
    UIView *_middleLine;
    NSArray *_sampleGroups;
    NSMutableArray *_samplesToProcess;
    double _durationPerSegment;
}

@property double durationPerSegment; // @synthesize durationPerSegment=_durationPerSegment;
@property(retain) NSMutableArray *samplesToProcess; // @synthesize samplesToProcess=_samplesToProcess;
@property(retain) NSArray *sampleGroups; // @synthesize sampleGroups=_sampleGroups;
@property(retain) UIView *middleLine; // @synthesize middleLine=_middleLine;
@property(retain) UIView *positionMarker; // @synthesize positionMarker=_positionMarker;
@property(retain) UICollectionViewFlowLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(retain) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)updateContentOffsetToBeAtEnd;
- (void)updatePositionMarkerAndMiddleLine;
- (void)loadWaveformFromAudioFileAtURL:(id)arg1;
- (void)processSamples;
- (double)powerLevelFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (id)sampleFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)captureSession:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)layoutSubviews;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

