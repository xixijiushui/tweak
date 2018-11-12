//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PLCollectionViewDataSource;

@interface PLSubscribeDataSource : NSObject
{
    _Bool _isAddingOrDeleting;
    id <PLSubscribeDelegate> _delegate;
    id <PLNeedLoginDelegate> _loginDelegate;
    PLCollectionViewDataSource *_collectionDataSource;
    unsigned long long _originState;
    unsigned long long _staticState;
}

@property(nonatomic) _Bool isAddingOrDeleting; // @synthesize isAddingOrDeleting=_isAddingOrDeleting;
@property(nonatomic) unsigned long long staticState; // @synthesize staticState=_staticState;
@property(nonatomic) unsigned long long originState; // @synthesize originState=_originState;
@property(nonatomic) __weak PLCollectionViewDataSource *collectionDataSource; // @synthesize collectionDataSource=_collectionDataSource;
@property(nonatomic) __weak id <PLNeedLoginDelegate> loginDelegate; // @synthesize loginDelegate=_loginDelegate;
@property(nonatomic) __weak id <PLSubscribeDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (unsigned long long)state;
- (void)updateState;
- (void)triggleOwnerSubscribeStateWithLoadingBegin:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchOwnerSubscribeStateWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithCollectionDataSource:(id)arg1;

@end
