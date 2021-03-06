//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LSHomeViewModel.h"

@interface LSSubscribListViewModel : LSHomeViewModel
{
}

- (void)itemClickWithCollection:(id)arg1 indexPath:(id)arg2 contentController:(id)arg3;
- (long long)itemCountWithCollectionView:(id)arg1 section:(long long)arg2;
- (struct CGSize)footerSizeWithCollectionView:(id)arg1 section:(long long)arg2;
- (struct CGSize)headerSizeWithCollectionView:(id)arg1 section:(long long)arg2;
- (id)headerTitle;
- (_Bool)displayHeader;
- (_Bool)displayBox;
- (struct CGSize)itemSizeWithCollectionView:(id)arg1 indexPath:(id)arg2;
- (unsigned long long)headerType;
- (unsigned long long)displayBoxType:(id)arg1;

@end

