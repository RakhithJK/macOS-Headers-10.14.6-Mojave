//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSExtension, NSString;

__attribute__((visibility("hidden")))
@interface ExtensionWrapper : NSObject
{
    NSExtension *_appExtension;
    NSExtension *_contentBlockerAppExtension;
    NSString *_iconDataURLString;
    struct RefPtr<Safari::Extension, WTF::DumbPtrTraits<Safari::Extension>> _legacyExtension;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)largeIconURLStringForResolution:(int)arg1;
- (id)iconURLStringForResolution:(int)arg1;
- (id)smallIconURLStringForResolution:(int)arg1;
- (id)_dataURLStringForAppExtension:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *websiteAccess;
- (void)disable;
- (void)enable;
@property(readonly, nonatomic, getter=isSignedByApple) BOOL signedByApple;
@property(readonly, nonatomic) NSExtension *appExtension;
// Error parsing type for property legacyExtension:
// Property attributes: T^{Extension=^^?{HashSet<Safari::EventTarget *, WTF::PtrHash<Safari::EventTarget *>, WTF::HashTraits<Safari::EventTarget *> >={HashTable<Safari::EventTarget *, Safari::EventTarget *, WTF::IdentityExtractor, WTF::PtrHash<Safari::EventTarget *>, WTF::HashTraits<Safari::EventTarget *>, WTF::HashTraits<Safari::EventTarget *> >=^^{EventTarget}IIII}}{Lock={Atomic<unsigned char>={atomic<unsigned char>=AC}}}^^?^v@@@@@@@@@@@@@@BBB{Vector<NSURL *, 0, WTF::CrashOnOverflow, 16>=^@II}@@i{Vector<Safari::ExtensionDomainPattern, 0, WTF::CrashOnOverflow, 16>=^{ExtensionDomainPattern}II}ii@{HashMap<Safari::CF::String, WTF::RefPtr<Safari::ExtensionMenu, WTF::DumbPtrTraits<Safari::ExtensionMenu> >, Safari::CF::ObjectSubclassHash<Safari::CF::String>, WTF::HashTraits<Safari::CF::String>, WTF::HashTraits<WTF::RefPtr<Safari::ExtensionMenu, WTF::DumbPtrTraits<Safari::ExtensionMenu> > > >={HashTable<Safari::CF::String, WTF::KeyValuePair<Safari::CF::String, WTF::RefPtr<Safari::ExtensionMenu, WTF::DumbPtrTraits<Safari::ExtensionMenu> > >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<Safari::CF::String, WTF::RefPtr<Safari::ExtensionMenu, WTF::DumbPtrTraits<Safari::ExtensionMenu> > > >, Safari::CF::ObjectSubclassHash<Safari::CF::String>, WTF::HashMap<Safari::CF::String, WTF::RefPtr<Safari::ExtensionMenu, WTF::DumbPtrTraits<Safari::ExtensionMenu> >, Safari::CF::ObjectSubclassHash<Safari::CF::String>, WTF::HashTraits<Safari::CF::String>, WTF::HashTraits<WTF::RefPtr<Safari::ExtensionMenu, WTF::DumbPtrTraits<Safari::ExtensionMenu> > > >::KeyValuePairTraits, WTF::HashTraits<Safari::CF::String> >=^{KeyValuePair<Safari::CF::String, WTF::RefPtr<Safari::ExtensionMenu, WTF::DumbPtrTraits<Safari::ExtensionMenu> > >}IIII}}{HashMap<Safari::CF::String, WTF::RefPtr<Safari::ExtensionPopover, WTF::DumbPtrTraits<Safari::ExtensionPopover> >, Safari::CF::ObjectSubclassHash<Safari::CF::String>, WTF::HashTraits<Safari::CF::String>, WTF::HashTraits<WTF::RefPtr<Safari::ExtensionPopover, WTF::DumbPtrTraits<Safari::ExtensionPopover> > > >={HashTable<Safari::CF::String, WTF::KeyValuePair<Safari::CF::String, WTF::RefPtr<Safari::ExtensionPopover, WTF::DumbPtrTraits<Safari::ExtensionPopover> > >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<Safari::CF::String, WTF::RefPtr<Safari::ExtensionPopover, WTF::DumbPtrTraits<Safari::ExtensionPopover> > > >, Safari::CF::ObjectSubclassHash<Safari::CF::String>, WTF::HashMap<Safari::CF::String, WTF::RefPtr<Safari::ExtensionPopover, WTF::DumbPtrTraits<Safari::ExtensionPopover> >, Safari::CF::ObjectSubclassHash<Safari::CF::String>, WTF::HashTraits<Safari::CF::String>, WTF::HashTraits<WTF::RefPtr<Safari::ExtensionPopover, WTF::DumbPtrTraits<Safari::ExtensionPopover> > > >::KeyValuePairTraits, WTF::HashTraits<Safari::CF::String> >=^{KeyValuePair<Safari::CF::String, WTF::RefPtr<Safari::ExtensionPopover, WTF::DumbPtrTraits<Safari::ExtensionPopover> > >}IIII}}{Vector<Safari::CF::String, 0, WTF::CrashOnOverflow, 16>=^{String}II}{HashSet<Safari::CF::String, Safari::CF::ObjectSubclassHash<Safari::CF::String>, WTF::HashTraits<Safari::CF::String> >={HashTable<Safari::CF::String, Safari::CF::String, WTF::IdentityExtractor, Safari::CF::ObjectSubclassHash<Safari::CF::String>, WTF::HashTraits<Safari::CF::String>, WTF::HashTraits<Safari::CF::String> >=^{String}IIII}}{HashSet<Safari::CF::String, Safari::CF::ObjectSubclassHash<Safari::CF::String>, WTF::HashTraits<Safari::CF::String> >={HashTable<Safari::CF::String, Safari::CF::String, WTF::IdentityExtractor, Safari::CF::ObjectSubclassHash<Safari::CF::String>, WTF::HashTraits<Safari::CF::String>, WTF::HashTraits<Safari::CF::String> >=^{String}IIII}}{HashSet<Safari::CF::String, Safari::CF::ObjectSubclassHash<Safari::CF::String>, WTF::HashTraits<Safari::CF::String> >={HashTable<Safari::CF::String, Safari::CF::String, WTF::IdentityExtractor, Safari::CF::ObjectSubclassHash<Safari::CF::String>, WTF::HashTraits<Safari::CF::String>, WTF::HashTraits<Safari::CF::String> >=^{String}IIII}}{RefPtr<Safari::ContentExtensionProxy, WTF::DumbPtrTraits<Safari::ContentExtensionProxy> >=^{ContentExtensionProxy}}{RefPtr<Safari::ExtensionSettings, WTF::DumbPtrTraits<Safari::ExtensionSettings> >=^{ExtensionSettings}}{RefPtr<Safari::ExtensionSecureSettings, WTF::DumbPtrTraits<Safari::ExtensionSecureSettings> >=^{ExtensionSecureSettings}}{RefPtr<Safari::ExtensionNamespace, WTF::DumbPtrTraits<Safari::ExtensionNamespace> >=^{ExtensionNamespace}}{RefPtr<Safari::ExtensionGlobalPageViewControllerOld, WTF::DumbPtrTraits<Safari::ExtensionGlobalPageViewControllerOld> >=^{ExtensionGlobalPageViewControllerOld}}{RefPtr<Safari::ExtensionCompanion, WTF::DumbPtrTraits<Safari::ExtensionCompanion> >=^{ExtensionCompanion}}{ListHashSet<WTF::RefPtr<Safari::ExtensionBar, WTF::DumbPtrTraits<Safari::ExtensionBar> >, WTF::PtrHash<WTF::RefPtr<Safari::ExtensionBar, WTF::DumbPtrTraits<Safari::ExtensionBar> > > >={HashTable<WTF::ListHashSetNode<WTF::RefPtr<Safari::ExtensionBar, WTF::DumbPtrTraits<Safari::ExtensionBar> > > *, WTF::ListHashSetNode<WTF::RefPtr<Safari::ExtensionBar, WTF::DumbPtrTraits<Safari::ExtensionBar> > > *, WTF::IdentityExtractor, WTF::ListHashSetNodeHashFunctions<WTF::PtrHash<WTF::RefPtr<Safari::ExtensionBar, WTF::DumbPtrTraits<Safari::ExtensionBar> > > >, WTF::HashTraits<WTF::ListHashSetNode<WTF::RefPtr<Safari::ExtensionBar, WTF::DumbPtrTraits<Safari::ExtensionBar> > > *>, WTF::HashTraits<WTF::ListHashSetNode<WTF::RefPtr<Safari::ExtensionBar, WTF::DumbPtrTraits<Safari::ExtensionBar> > > *> >=^^{ListHashSetNode<WTF::RefPtr<Safari::ExtensionBar, WTF::DumbPtrTraits<Safari::ExtensionBar> > >}IIII}^{ListHashSetNode<WTF::RefPtr<Safari::ExtensionBar, WTF::DumbPtrTraits<Safari::ExtensionBar> > >}^{ListHashSetNode<WTF::RefPtr<Safari::ExtensionBar, WTF::DumbPtrTraits<Safari::ExtensionBar> > >}}{ListHashSet<WTF::RefPtr<Safari::ExtensionToolbarItem, WTF::DumbPtrTraits<Safari::ExtensionToolbarItem> >, WTF::PtrHash<WTF::RefPtr<Safari::ExtensionToolbarItem, WTF::DumbPtrTraits<Safari::ExtensionToolbarItem> > > >={HashTable<WTF::ListHashSetNode<WTF::RefPtr<Safari::ExtensionToolbarItem, WTF::DumbPtrTraits<Safari::ExtensionToolbarItem> > > *, WTF::ListHashSetNode<WTF::RefPtr<Safari::ExtensionToolbarItem, WTF::DumbPtrTraits<Safari::ExtensionToolbarItem> > > *, WTF::IdentityExtractor, WTF::ListHashSetNodeHashFunctions<WTF::PtrHash<WTF::RefPtr<Safari::ExtensionToolbarItem, WTF::DumbPtrTraits<Safari::ExtensionToolbarItem> > > >, WTF::HashTraits<WTF::ListHashSetNode<WTF::RefPtr<Safari::ExtensionToolbarItem, WTF::DumbPtrTraits<Safari::ExtensionToolbarItem> > > *>, WTF::HashTraits<WTF::ListHashSetNode<WTF::RefPtr<Safari::ExtensionToolbarItem, WTF::DumbPtrTraits<Safari::ExtensionToolbarItem> > > *> >=^^{ListHashSetNode<WTF::RefPtr<Safari::ExtensionToolbarItem, WTF::DumbPtrTraits<Safari::ExtensionToolbarItem> > >}IIII}^{ListHashSetNode<WTF::RefPtr<Safari::ExtensionToolbarItem, WTF::DumbPtrTraits<Safari::ExtensionToolbarItem> > >}^{ListHashSetNode<WTF::RefPtr<Safari::ExtensionToolbarItem, WTF::DumbPtrTraits<Safari::ExtensionToolbarItem> > >}}{Vector<std::__1::unique_ptr<Safari::ExtensionPageContent, std::__1::default_delete<Safari::ExtensionPageContent> >, 0, WTF::CrashOnOverflow, 16>=^{unique_ptr<Safari::ExtensionPageContent, std::__1::default_delete<Safari::ExtensionPageContent> >}II}{Vector<std::__1::unique_ptr<Safari::ExtensionPageContent, std::__1::default_delete<Safari::ExtensionPageContent> >, 0, WTF::CrashOnOverflow, 16>=^{unique_ptr<Safari::ExtensionPageContent, std::__1::default_delete<Safari::ExtensionPageContent> >}II}{Vector<std::__1::unique_ptr<Safari::ExtensionPageContent, std::__1::default_delete<Safari::ExtensionPageContent> >, 0, WTF::CrashOnOverflow, 16>=^{unique_ptr<Safari::ExtensionPageContent, std::__1::default_delete<Safari::ExtensionPageContent> >}II}@@@{Vector<WTF::RefPtr<Safari::ExtensionContextMenuItem, WTF::DumbPtrTraits<Safari::ExtensionContextMenuItem> >, 0, WTF::CrashOnOverflow, 16>=^{RefPtr<Safari::ExtensionContextMenuItem, WTF::DumbPtrTraits<Safari::ExtensionContextMenuItem> >}II}{HashSet<WTF::RefPtr<Safari::ExtensionContextMenuItem, WTF::DumbPtrTraits<Safari::ExtensionContextMenuItem> >, WTF::PtrHash<WTF::RefPtr<Safari::ExtensionContextMenuItem, WTF::DumbPtrTraits<Safari::ExtensionContextMenuItem> > >, WTF::HashTraits<WTF::RefPtr<Safari::ExtensionContextMenuItem, WTF::DumbPtrTraits<Safari::ExtensionContextMenuItem> > > >={HashTable<WTF::RefPtr<Safari::ExtensionContextMenuItem, WTF::DumbPtrTraits<Safari::ExtensionContextMenuItem> >, WTF::RefPtr<Safari::ExtensionContextMenuItem, WTF::DumbPtrTraits<Safari::ExtensionContextMenuItem> >, WTF::IdentityExtractor, WTF::PtrHash<WTF::RefPtr<Safari::ExtensionContextMenuItem, WTF::DumbPtrTraits<Safari::ExtensionContextMenuItem> > >, WTF::HashTraits<WTF::RefPtr<Safari::ExtensionContextMenuItem, WTF::DumbPtrTraits<Safari::ExtensionContextMenuItem> > >, WTF::HashTraits<WTF::RefPtr<Safari::ExtensionContextMenuItem, WTF::DumbPtrTraits<Safari::ExtensionContextMenuItem> > > >=^{RefPtr<Safari::ExtensionContextMenuItem, WTF::DumbPtrTraits<Safari::ExtensionContextMenuItem> >}IIII}}{HashMap<Safari::WK::Page, Safari::WK::SerializedScriptValue, Safari::WK::ObjectSubclassHash<Safari::WK::Page>, WTF::HashTraits<Safari::WK::Page>, WTF::HashTraits<Safari::WK::SerializedScriptValue> >={HashTable<Safari::WK::Page, WTF::KeyValuePair<Safari::WK::Page, Safari::WK::SerializedScriptValue>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<Safari::WK::Page, Safari::WK::SerializedScriptValue> >, Safari::WK::ObjectSubclassHash<Safari::WK::Page>, WTF::HashMap<Safari::WK::Page, Safari::WK::SerializedScriptValue, Safari::WK::ObjectSubclassHash<Safari::WK::Page>, WTF::HashTraits<Safari::WK::Page>, WTF::HashTraits<Safari::WK::SerializedScriptValue> >::KeyValuePairTraits, WTF::HashTraits<Safari::WK::Page> >=^{KeyValuePair<Safari::WK::Page, Safari::WK::SerializedScriptValue>}IIII}}QcBB},R,N

@property(readonly, nonatomic) BOOL isLegacyExtension;
@property(readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property(readonly, copy, nonatomic) NSString *highResourceUsageWarningText;
@property(readonly, copy, nonatomic) NSString *descriptionText;
@property(readonly, copy, nonatomic) NSString *containingAppDisplayName;
@property(readonly, copy, nonatomic) NSString *displayVersion;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly, copy, nonatomic) NSString *displayName;
- (id)initWithIdentifier:(id)arg1;

@end

