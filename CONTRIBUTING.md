# Contributing

このリポジトリでは、コミット履歴と変更目的を分かりやすく保つため、Conventional Commitsをベースとしたコミットメッセージ規則を使用します。

また、ある程度まとまった変更では作業ブランチとPull Requestを使用し、`main`へ反映する前に変更内容を確認します。

## Commit Message Convention

基本形式は以下とします。

```text
<type>[optional scope]: <description>
```

必要に応じて、1行空けて本文を追加します。

```text
<type>[optional scope]: <description>

<optional body>
```

`type`と`scope`は英語、`description`と`body`は原則として日本語で記述します。

## Types

| Type | 用途 |
| --- | --- |
| `feat` | 新しい機能、ライブラリ、スニペットなどを追加する |
| `solve` | 競技プログラミングの問題の解答を追加・更新する |
| `fix` | バグや誤った実装を修正する |
| `refactor` | 動作を変えずにコード構造を改善する |
| `perf` | 計算量や実行性能を改善する |
| `docs` | READMEや運用文書などを変更する |
| `style` | 動作に影響しない書式・記述スタイルを変更する |
| `test` | テストを追加・修正する |
| `chore` | VS Code、Git、開発環境などの保守作業を行う |

`solve`は、この競技プログラミングリポジトリ独自のtypeです。

## Scope

`scope`は任意です。

変更対象を明確にできる場合に指定します。

主な例:

```text
snippets
vscode
library
techniques
techful
abc479
docs
```

## Commit Message Rules

コミットメッセージは、原則として以下のルールに従います。

- `type`と`scope`は英語で記述する
- `description`と`body`は原則として日本語で記述する
- `description`は変更内容を簡潔に表す
- `description`は「追加」「修正」「更新」「削除」「整理」などで簡潔に終える
- `description`の末尾に句点を付けない
- 1つのコミットには、できるだけ1つの論理的な変更だけを含める
- 変更理由や補足が必要な場合は、1行空けて本文を書く

## Commit Message Examples

C++コードスニペットを追加する場合:

```text
feat(snippets): C++コードスニペットを追加
```

AtCoder Beginner Contestの解答を追加する場合:

```text
solve(abc479): A-D問題の解答を追加
```

アルゴリズム実装例を追加する場合:

```text
feat(techniques): Dijkstra法の実装例を追加
```

ライブラリの不具合を修正する場合:

```text
fix(library): Rolling Hashの区間計算を修正
```

実装を整理する場合:

```text
refactor(techniques): Union-Findの実装を整理
```

実行性能を改善する場合:

```text
perf(techniques): 素数列挙の処理を高速化
```

READMEや運用文書を変更する場合:

```text
docs: リポジトリの説明を更新
```

VS Codeの設定を変更する場合:

```text
chore(vscode): ビルド設定を更新
```

書式のみを変更する場合:

```text
style: C++コードの書式を統一
```

## Branch Convention

小規模で独立した競技プログラミングの解答追加や軽微な修正は、`main`へ直接コミットしても構いません。

以下のような変更では、作業ブランチを作成してPull Request経由で`main`へマージすることを推奨します。

- ライブラリやアルゴリズム実装の追加・大幅な変更
- VS CodeやGitなど開発環境設定の変更
- コードスニペットの大幅な変更
- 複数ファイルにまたがる変更
- リポジトリ構成の変更
- 動作確認や試行錯誤を伴う変更

ブランチ名は、以下の形式を基本とします。

```text
<type>/<short-description>
```

例:

```text
docs/commit-convention
feat/snippets
feat/techniques-dijkstra
fix/rolling-hash
refactor/union-find
chore/vscode-settings
```

作業完了後はPull Requestを作成し、`main`との差分を確認してからマージします。

マージ後、不要になった作業ブランチは削除します。

## Pull Request Convention

Pull Requestは、変更内容を`main`へ反映する前に、変更の目的・内容・確認結果を整理して確認するために使用します。

### Pull Request Title

Pull Requestのタイトルは、原則としてコミットメッセージと同じ形式を使用します。

```text
<type>[optional scope]: <description>
```

例:

```text
docs: コミットメッセージとブランチ運用規則を追加
```

```text
feat(snippets): C++コードスニペットを追加
```

```text
fix(techniques): Dijkstra法の実装を修正
```

`type`と`scope`は英語、`description`は原則として日本語で記述します。

### Pull Request Description

Pull RequestのDescriptionでは、変更されたファイルを単に列挙するのではなく、変更の目的と内容を、後から見ても理解できる形で記述します。

原則として、以下の3項目を記載します。

#### 概要

このPull Requestを作成した目的や、解決・実現したい内容を簡潔に記述します。

「何を変更したか」だけでなく、必要に応じて「なぜ変更するのか」も記載します。

例:

```markdown
## 概要

リポジトリ内のコミットメッセージとブランチ運用を統一するため、
CONTRIBUTING.mdに運用規則を追加します。
```

#### 変更内容

主要な変更を箇条書きで記述します。

ファイル名だけを並べるのではなく、その変更によって何が変わったのかが分かるように記載します。

例:

```markdown
## 変更内容

- Conventional Commitsをベースとしたコミットメッセージ規則を追加
- ブランチ命名規則とPull Requestの運用方針を追加
- READMEからCONTRIBUTING.mdへの導線を追加
```

#### 確認内容

Pull Requestを作成する前に実施した確認内容を記述します。

コード変更の場合は、コンパイル・実行・テストなど、実際に行った確認のみを記載します。

ドキュメント変更の場合は、Markdown表示・リンク・誤字・差分などの確認内容を記載します。

例:

```markdown
## 確認内容

- [x] Markdownの表示を確認
- [x] READMEからCONTRIBUTING.mdへのリンクを確認
- [x] 意図しないファイルが差分に含まれていないことを確認
```

実施していないテストや確認を、実施済みとして記載しません。

確認が不要な変更の場合は、その理由を簡潔に記載します。

### Optional Sections

以下の項目は、必要な場合のみ追加します。

#### 関連Issue

関連するIssueが存在する場合は記載します。

例:

```markdown
## 関連Issue

Closes #10
```

`Closes`、`Fixes`、`Resolves`などGitHubがサポートするキーワードを使用すると、対象のPull Requestがデフォルトブランチへマージされた際に、関連Issueを自動的にクローズできます。

関連Issueが存在しない場合、このセクションは省略します。

#### レビューしてほしい点

特に確認したい設計・実装・設定などがある場合に記載します。

例:

```markdown
## レビューしてほしい点

- `solve`を独自typeとして定義する方針が適切か
- 小規模な変更を`main`へ直接コミットできる運用に問題がないか
```

特に確認してほしい点がない場合、このセクションは省略します。

#### 補足

互換性への影響、既知の制約、今後別のPull Requestで対応する事項など、レビューに必要な補足情報がある場合に記載します。

例:

```markdown
## 補足

PRテンプレートの自動適用については、別の変更として追加予定です。
```

補足事項がない場合、このセクションは省略します。

### Pull Request Description Template

基本形は以下とします。

```markdown
## 概要

<!-- このPRの目的や背景を簡潔に記述する -->


## 変更内容

- 


## 確認内容

- [ ] 
```

必要に応じて、以下を追加します。

```markdown
## 関連Issue

Closes #


## レビューしてほしい点

- 


## 補足

- 
```

不要な任意セクションは、空のまま残さず削除します。

### Pull Request Description Rules

Pull RequestのDescriptionは、原則として以下のルールに従います。

- 変更の目的が分かるようにする
- 主要な変更内容を簡潔に整理する
- 実際に行った確認・テスト内容を記載する
- 変更ファイルの一覧だけでDescriptionを終わらせない
- コミットメッセージをそのまま並べるだけにしない
- コードやdiffをDescriptionへ大量に貼り付けない
- 関連Issueがある場合はリンクする
- 特にレビューしてほしい箇所がある場合は明示する
- 実施していない確認やテストを実施済みとして記載しない
- 不要なテンプレート項目やコメントは削除する
- Descriptionは変更内容に合わせて必要十分な長さにする

小規模なPull Requestでは、無理に説明を長くせず、変更目的・変更内容・確認内容が分かれば十分とします。

### Self Review

Pull Requestを作成した後、マージまたはレビュー依頼を行う前に、自分でPull Requestの差分を確認します。

最低限、以下を確認します。

- 意図しないファイルや変更が含まれていないか
- 不要なデバッグコードや一時的なコメントが残っていないか
- コミットメッセージとPull Requestの内容が一致しているか
- Descriptionが実際の変更内容と一致しているか
- 必要なコンパイル・実行・テスト・表示確認を行ったか

問題がなければ、Pull Requestを`main`へマージします。

## Reference

コミットメッセージ規則はConventional Commits 1.0.0をベースとしています。

Pull Requestの運用規則は、GitHub公式ドキュメントで示されているPull Request作成・レビュー・テンプレート運用の考え方を参考にしています。