//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, PSTCollectionView, PSTCollectionViewLayoutAttributes;

@interface PSTCollectionReusableView : UIView
{
    PSTCollectionViewLayoutAttributes *_layoutAttributes;
    NSString *_reuseIdentifier;
    PSTCollectionView *_collectionView;
    struct {
        unsigned int inUpdateAnimation:1;
    } _reusableViewFlags;
    char filler[50];
}

@property(retain, nonatomic) PSTCollectionViewLayoutAttributes *layoutAttributes; // @synthesize layoutAttributes=_layoutAttributes;
@property(nonatomic) PSTCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(copy, nonatomic) NSString *reuseIdentifier; // @synthesize reuseIdentifier=_reuseIdentifier;
- (void).cxx_destruct;
- (void)setInUpdateAnimation:(_Bool)arg1;
- (_Bool)isInUpdateAnimation;
- (void)didTransitionFromLayout:(id)arg1 toLayout:(id)arg2;
- (void)willTransitionFromLayout:(id)arg1 toLayout:(id)arg2;
- (void)applyLayoutAttributes:(id)arg1;
- (void)prepareForReuse;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

