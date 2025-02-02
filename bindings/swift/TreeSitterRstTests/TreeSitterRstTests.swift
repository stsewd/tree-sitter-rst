import XCTest
import SwiftTreeSitter
import TreeSitterRst

final class TreeSitterRstTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_rst())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading ReStructuredText grammar")
    }
}
