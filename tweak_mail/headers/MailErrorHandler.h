//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet;

@interface MailErrorHandler : NSObject
{
    NSMutableSet *_displayedErrorDescriptions;
    NSMutableSet *_sslErrorAccountsDisplayed;
}

- (id)_alertTitleWithError:(id)arg1;
- (void)_presentAlertWithSettingsButtonForAccount:(id)arg1 error:(id)arg2;
- (void)_promptUserToTryAlternateSettingsAccount:(id)arg1 newAccount:(id)arg2 withError:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_attemptHealOfAccount:(id)arg1 withAlternateAccount:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_renewCredentialsForAccount:(id)arg1 error:(id)arg2;
- (void)_promptUserForPasswordWithAccount:(id)arg1 error:(id)arg2;
- (void)_promptUserForWebLoginWithAccount:(id)arg1 error:(id)arg2;
- (void)_changeSetManagerEncounteredError:(id)arg1;
- (void)_redirectToRecoveryURL:(id)arg1;
- (void)_overwriteAccount:(id)arg1 withAlternateAccount:(id)arg2;
- (id)_fetchServerFromACEDB:(id)arg1 forIncomingServer:(_Bool)arg2;
- (id)lastTimeConnectToACEDBForAccount:(id)arg1;
- (id)_getMailAccountFromDeliveryAccount:(id)arg1;
- (void)displayError:(id)arg1 forAccount:(id)arg2 mode:(int)arg3;
- (void)_displayError:(id)arg1 forAccount:(id)arg2 mode:(int)arg3;
- (_Bool)_shouldHealAccount:(id)arg1 withNewAccount:(id)arg2;
- (void)healAccount:(id)arg1 withError:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)preferencesURLForAccount:(id)arg1 withError:(id)arg2;
- (id)sanitizedErrorForError:(id)arg1 forAccount:(id)arg2;
- (void)didDisplayError:(id)arg1;
- (_Bool)shouldDisplayError:(id)arg1 forAccount:(id)arg2 mode:(int)arg3;
- (void)reset;
- (void)dealloc;
- (id)init;

@end
