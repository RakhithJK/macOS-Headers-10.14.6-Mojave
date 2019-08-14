//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXNavigationParticipatingViewController.h"

#import "NSCollectionViewDataSource-Protocol.h"
#import "NSCollectionViewDelegate-Protocol.h"
#import "PHProjectTypeDescriptionSourceClientObserver-Protocol.h"

@class NSArray, NSAttributedString, NSCollectionView, NSLayoutConstraint, NSSet, NSString, NSTextField, NSVisualEffectView, PHProjectTypeDescription, PHProjectTypeDescriptionSourceClient;
@protocol IPXProjectExtensionTypeSelectionCollectionViewControllerDelegate;

@interface IPXProjectExtensionTypeSelectionCollectionViewController : IPXNavigationParticipatingViewController <NSCollectionViewDataSource, NSCollectionViewDelegate, PHProjectTypeDescriptionSourceClientObserver>
{
    PHProjectTypeDescriptionSourceClient *_dataSourceClient;
    PHProjectTypeDescription *_selectedProjectTypeDescription;
    id <IPXProjectExtensionTypeSelectionCollectionViewControllerDelegate> _delegate;
    IPXProjectExtensionTypeSelectionCollectionViewController *_childTypeSelectionCollectionViewController;
    NSString *_projectTypeLevel;
    PHProjectTypeDescription *_parentProjectTypeDescription;
    NSSet *_knownProjectTypes;
    NSCollectionView *_collectionView;
    NSArray *_projectTypeDescriptions;
    NSLayoutConstraint *_scrollViewToFooterConstraint;
    NSLayoutConstraint *_scrollViewToBottomConstraint;
    NSTextField *_footerTextView;
    NSAttributedString *_footerText;
    NSVisualEffectView *_footerEffectView;
}

@property(retain, nonatomic) NSVisualEffectView *footerEffectView; // @synthesize footerEffectView=_footerEffectView;
@property(copy, nonatomic) NSAttributedString *footerText; // @synthesize footerText=_footerText;
@property(retain, nonatomic) NSTextField *footerTextView; // @synthesize footerTextView=_footerTextView;
@property(retain, nonatomic) NSLayoutConstraint *scrollViewToBottomConstraint; // @synthesize scrollViewToBottomConstraint=_scrollViewToBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *scrollViewToFooterConstraint; // @synthesize scrollViewToFooterConstraint=_scrollViewToFooterConstraint;
@property(readonly, copy, nonatomic) NSArray *projectTypeDescriptions; // @synthesize projectTypeDescriptions=_projectTypeDescriptions;
@property(nonatomic) __weak NSCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(copy, nonatomic) NSSet *knownProjectTypes; // @synthesize knownProjectTypes=_knownProjectTypes;
@property(retain, nonatomic) PHProjectTypeDescription *parentProjectTypeDescription; // @synthesize parentProjectTypeDescription=_parentProjectTypeDescription;
@property(copy, nonatomic) NSString *projectTypeLevel; // @synthesize projectTypeLevel=_projectTypeLevel;
@property(nonatomic) __weak IPXProjectExtensionTypeSelectionCollectionViewController *childTypeSelectionCollectionViewController; // @synthesize childTypeSelectionCollectionViewController=_childTypeSelectionCollectionViewController;
@property(nonatomic) __weak id <IPXProjectExtensionTypeSelectionCollectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PHProjectTypeDescription *selectedProjectTypeDescription; // @synthesize selectedProjectTypeDescription=_selectedProjectTypeDescription;
@property(retain, nonatomic) PHProjectTypeDescriptionSourceClient *dataSourceClient; // @synthesize dataSourceClient=_dataSourceClient;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemsAtIndexPaths:(id)arg2;
- (id)collectionView:(id)arg1 itemForRepresentedObjectAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)typeDescriptionSourceClient:(id)arg1 didInvalidateFooterTextForSubtypesOfProjectType:(id)arg2;
- (void)typeDescriptionSourceClient:(id)arg1 didInvalidateDescriptionForProjectType:(id)arg2;
- (void)_propagateProjectTypeToChild:(id)arg1;
- (void)_replaceProjectTypeDescription:(id)arg1 forProjectType:(id)arg2;
- (void)_reloadProjectType:(id)arg1;
- (void)_reloadFooterFromDataSource;
- (void)_reloadTypesFromDataSource;
- (void)_handleXPCError:(id)arg1;
- (void)setDataSourceClient:(id)arg1 parentProjectTypeDescription:(id)arg2;
- (void)_makeSelectionIfNecessary:(BOOL)arg1;
- (void)setProjectTypes:(id)arg1 performCollectionViewUpdates:(BOOL)arg2;
- (void)performCollectionViewUpdateFromProjectTypes:(id)arg1 toProjectTypes:(id)arg2 updateDataSource:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (id)preferredFirstResponder;
- (void)_workaround33904263;
- (struct CGSize)preferredContentSize;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

