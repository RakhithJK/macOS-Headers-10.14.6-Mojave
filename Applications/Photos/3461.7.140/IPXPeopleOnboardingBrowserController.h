//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXBrowserController.h"

#import "IPXLibraryChangeReceiver-Protocol.h"
#import "IPXPeopleProgressDelegate-Protocol.h"

@class IPXLibrary, NSObject, NSString, PXPeopleProgressManager;
@protocol IPXPeopleOnboardingDelegate, OS_dispatch_queue;

@interface IPXPeopleOnboardingBrowserController : IPXBrowserController <IPXPeopleProgressDelegate, IPXLibraryChangeReceiver>
{
    IPXLibrary *_library;
    PXPeopleProgressManager *_progressManager;
    id <IPXPeopleOnboardingDelegate> _delegate;
    unsigned long long _onboardStatus;
    NSObject<OS_dispatch_queue> *_imageQueue;
}

+ (BOOL)canProvideViewControllersForNavigationDestination:(id)arg1;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *imageQueue; // @synthesize imageQueue=_imageQueue;
@property(nonatomic) unsigned long long onboardStatus; // @synthesize onboardStatus=_onboardStatus;
@property(nonatomic) __weak id <IPXPeopleOnboardingDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) PXPeopleProgressManager *progressManager; // @synthesize progressManager=_progressManager;
@property(readonly, nonatomic) IPXLibrary *library; // @synthesize library=_library;
- (void).cxx_destruct;
- (void)_progressChanged:(id)arg1;
- (void)_switchViewControllersForStatus:(unsigned long long)arg1;
- (void)pushToPeopleHome;
- (void)progressControllerDidSelectProgressButton:(id)arg1;
- (void)libraryDidChangeUserContentAvailability:(id)arg1;
- (id)navigationDestination;
- (id)navigationIdentifier;
- (BOOL)canProvideViewControllersForNavigationDestination:(id)arg1;
- (void)_switchFromChildViewController:(id)arg1 toViewController:(id)arg2;
- (id)_controllerForStatus:(unsigned long long)arg1;
- (void)_updateStatusViewForStatus:(unsigned long long)arg1;
- (void)_updateWithStatus:(unsigned long long)arg1;
- (BOOL)supportsInspector;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithLibrary:(id)arg1 progressManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

