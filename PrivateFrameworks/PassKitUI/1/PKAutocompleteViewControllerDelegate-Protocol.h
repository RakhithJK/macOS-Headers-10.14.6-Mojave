//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PassKitUI/NSObject-Protocol.h>

@class NSIndexPath, NSView, PKAutocompleteViewController;

@protocol PKAutocompleteViewControllerDelegate <NSObject>
- (void)autocompleteViewControllerDidFinish:(PKAutocompleteViewController *)arg1;
- (NSView *)autocompleteViewController:(PKAutocompleteViewController *)arg1 viewForRowAtIndexPath:(NSIndexPath *)arg2;
- (NSView *)autocompleteViewController:(PKAutocompleteViewController *)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)autocompleteViewController:(PKAutocompleteViewController *)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInAutocompleteViewController:(PKAutocompleteViewController *)arg1;

@optional
- (void)autocompleteViewController:(PKAutocompleteViewController *)arg1 didSelectRowAtIndexPath:(NSIndexPath *)arg2;
@end

