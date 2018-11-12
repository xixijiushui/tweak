//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LSCMSBox;

@interface LSHomeViewModel : NSObject
{
    LSCMSBox *_boxModel;
}

@property(nonatomic) __weak LSCMSBox *boxModel; // @synthesize boxModel=_boxModel;
- (void).cxx_destruct;
- (id)getLiveStateStr:(unsigned long long)arg1;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)headerClickWithBoxHeader:(id)arg1 contentController:(id)arg2;
- (double)minimumLineWithCollectionView:(id)arg1 section:(long long)arg2;
- (void)itemClickWithCollection:(id)arg1 indexPath:(id)arg2 contentController:(id)arg3;
- (struct CGSize)footerSizeWithCollectionView:(id)arg1 section:(long long)arg2;
- (struct CGSize)headerSizeWithCollectionView:(id)arg1 section:(long long)arg2;
- (struct CGSize)itemSizeWithCollectionView:(id)arg1 indexPath:(id)arg2;
- (long long)itemCountWithCollectionView:(id)arg1 section:(long long)arg2;
- (id)itemDataWithIndexPath:(id)arg1;
- (unsigned long long)displayBoxType:(id)arg1;
- (unsigned long long)headerType;
- (id)headerTitle;
- (_Bool)displayBox;
- (_Bool)displayHeader;
- (id)initWithBox:(id)arg1;

@end

